# $FreeBSD$

PORTNAME=	libg15render
PORTVERSION=	1.3
CATEGORIES=	sysutils

MAINTAINER=	menelkir@itroll.org
COMMENT=	Library to render the LCD screen on Logitech keyboards

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libg15.so:sysutils/libg15

USES=		compiler:gcc-c++11-lib gmake libtool tar:bzip2

USE_GITLAB=	yes
GL_ACCOUNT=	menelkir
GL_PROJECT=	${PORTNAME}
GL_COMMIT=	4be4a2e3c0a59e8a614c43541eb57a53a4a39f67

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

.include <bsd.port.mk>
