# $FreeBSD$

PORTNAME=	irssi
#PORTVERSION=	1.2.2
DISTVERSION=	1.3.20200911
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES?=	irc
#MASTER_SITES=	https://github.com/irssi/irssi/releases/download/${PORTVERSION}/

MAINTAINER=	dor.bsd@xm0.uk
COMMENT=	Modular IRC client with many features

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

# Until upstream makes a new release disable cpe
USES=		gettext-runtime gnome meson localbase:ldflags ncurses \
		pkgconfig ssl
USE_GNOME=	glib20
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_TAGNAME=	561619f

# Force OpenSSL from base
CPPFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB} -lcrypto -lssl

MESON_ARGS=	-Dinstall-glib=no -Ddisable-gregex=no -Dstatic-dependency=no \
		-Dwith-fuzzer=no -Dwithout-textui=no

OPTIONS_DEFINE=		BOT CAPSICUM DOCS OTR PERL PROXY TRUECOLOR UTF8PROC
OPTIONS_DEFAULT=	BOT CAPSICUM PERL PROXY TRUECOLOR
OPTIONS_SUB=		yes

BOT_DESC=		Bot support
CAPSICUM_DESC=		Capsicum support
OTR_DESC=		OTR (off-the-record) support
TRUECOLOR_DESC=		True color support
UTF8PROC_DESC=		utf8proc support

BOT_MESON_ON=		-Dwith-bot=yes
BOT_MESON_OFF=		-Dwith-bot=no

CAPSICUM_MESON_ON=	-Dwith-capsicum=yes
CAPSICUM_MESON_OFF=	-Dwith-capsicum=no

OTR_LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
			libotr.so:security/libotr
OTR_MESON_ON=		-Dwith-otr=yes
OTR_MESON_OFF=		-Dwith-otr=no

PERL_USES=		perl5
PERL_MESON_ON=		-Dwith-perl=yes
PERL_MESON_OFF=		-Dwith-perl=no

PROXY_MESON_ON=		-Dwith-proxy=yes
PROXY_MESON_OFF=	-Dwith-proxy=no

TRUECOLOR_MESON_ON=	-Denable-true-color=yes
TRUECOLOR_MESON_OFF=	-Denable-true-color=no

UTF8PROC_LIB_DEPENDS=	libutf8proc.so:textproc/utf8proc
UTF8PROC_MESON_ON=	-Ddisable-utf8proc=no
UTF8PROC_MESON_OFF=	-Ddisable-utf8proc=yes

post-install:
	@${MV} ${WRKSRC}/irssi.conf ${STAGEDIR}${PREFIX}/etc/irssi.conf.sample

.include <bsd.port.mk>
