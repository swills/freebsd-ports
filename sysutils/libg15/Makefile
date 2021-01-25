# $FreeBSD$

PORTNAME=	libg15
PORTVERSION=	1.2.8
CATEGORIES=	sysutils

MAINTAINER=	menelkir@itroll.org
COMMENT=	API for control of LCD and the extra keys on Logitech keyboards

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:gcc-c++11-lib gmake libtool tar:bzip2

USE_GITLAB=	yes
GL_ACCOUNT=	menelkir
GL_PROJECT=	${PORTNAME}
GL_COMMIT=	d904b6f89015a5daf5b0eedcbd91907fa9877796

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

.include <bsd.port.mk>
