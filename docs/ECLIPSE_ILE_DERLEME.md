# Eclipse'te kendi programını derleme

Düzenlenmiş proje:
`/home/gokalp/Documents/myworkspace/endpoints/week1`

Özgün kodun `/home/gokalp/Documents/myworkspace/week1` altında aynen duruyor.
Programı henüz derlemedim. Derlemeyi aşağıdaki adımlarla sen yapacaksın.

## 1. Eclipse'e ekle

1. Eclipse'te **File > Import…** aç.
2. **C/C++ > Existing Code as Makefile Project** seç.
3. **Project Name:** `week1-console` yaz.
4. **Existing Code Location:** `/home/gokalp/Documents/myworkspace/endpoints/week1` seç.
5. **Toolchain:** `Linux GCC` seç ve **Finish** bas.

Bu seçenek yoksa kullandığın Eclipse'te C/C++ (CDT) desteğinin kurulu olması gerekir.

## 2. Makefile'ı göster

Projeye sağ tıkla: **Properties > C/C++ Build**.
**Builder Settings** bölümünde:

- **Generate Makefiles automatically** görünüyorsa işaretini kaldır.
- **Use default build command** işaretini kaldır.
- **Build command:** `make -f makefile.x86_64`
- **Build directory:** `/home/gokalp/Documents/myworkspace/endpoints/week1/local`

**Behavior** bölümünde normal build hedefi `all`, clean hedefi `clean` olsun.
**Apply and Close** bas.

Burada önemli olan şey, Makefile'ın `local` klasöründe çalışmasıdır.
`../app` ve `../common` yolları oradan kaynak dosyalarını bulur.

## 3. Derle

Projeyi seçip **Project > Build Project** tıkla.
**Console** bölümünde GCC komutları görünür. Hata yoksa proje klasöründe
`week1.bin` oluşur. Gerekirse projeye sağ tık > **Refresh** yap.

Derlemek, .c dosyalarını önce .o dosyalarına çevirmek, sonra onları birleştirip
çalıştırılabilir programı oluşturmaktır. Bu komutları Makefile yönetir.
Header'lar ayrıca derlenmez; .c dosyalarının include satırlarıyla okunur.

## 4. Çalıştır

**Run > Run Configurations… > C/C++ Application** altında yeni bir kayıt aç.
**Project:** `week1-console`.
**C/C++ Application:** Browse ile proje klasöründeki `week1.bin` dosyasını seç.
**Apply > Run** bas.

Menü Console'da açılır. Console'a tıklayıp örneğin `1`, Enter, `10`, Enter,
`20`, Enter gir. Sonuç 30 olmalı. Menüye dönünce `0` ile çık.
Bu beklenen davranıştır; bu oturumda çalıştırılmış sonuç değildir.

## Makefile hakkında

Abinin asıl dosyasının birebir kopyası `docs/makefile.x86_64.orijinal` içinde.
Kullandığın dosya `endpoints/week1/local/makefile.x86_64`.
Değişken ve kural düzeni onun dosyasından korundu. C projen için gcc/.c/c11,
header arama yolları ve week1.bin hedefi uyarlandı; kullanılmayan C++ kütüphaneleri
çıkarıldı. Test alanına yeni test sistemi eklenmedi.

Proje kökündeki app klasörü menü ve görevleri, common klasörü girdi ve hesapları
içerir. Her modülün kendi .h dosyası var; aynı bildirim başka başlığa kopyalanmaz.
main.c için gereksiz main.h yoktur. Klasörlerin geri kalanı şimdilik boştur.

Kaynaklar: [Eclipse build ayarları](https://help.eclipse.org/latest/topic/org.eclipse.cdt.doc.user/reference/cdt_u_prop_build.htm),
[Eclipse Makefile açıklaması](https://help.eclipse.org/latest/topic/org.eclipse.cdt.doc.user/concepts/cdt_c_makefile.htm).
