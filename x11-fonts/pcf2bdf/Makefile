# Created by: nork@FreeBSD.org
# $FreeBSD: head/x11-fonts/pcf2bdf/Makefile 486401 2018-12-02 09:48:55Z tobik $

PORTNAME=	pcf2bdf
PORTVERSION=	1.05
CATEGORIES=	x11-fonts

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Convert X font from PCF to BDF

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	ganaware

MAKEFILE=	Makefile.gcc
MAKE_ENV=	MANPATH="${MANPREFIX}/man/man1" \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		INSTALL_DATA="${INSTALL_MAN}" \
		INSTALL_DIR="${MKDIR}"

PLIST_FILES=	bin/pcf2bdf man/man1/pcf2bdf.1.gz

.include <bsd.port.mk>
