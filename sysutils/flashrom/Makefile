# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/sysutils/flashrom/Makefile 481795 2018-10-11 09:12:46Z manu $

PORTNAME=	flashrom
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://download.flashrom.org/releases/

MAINTAINER=	mizhka@gmail.com
COMMENT=	Utility for reading, writing, verifying, and erasing flash ROM chips

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

ONLY_FOR_ARCHS=	amd64 i386

LIB_DEPENDS=	libpci.so:devel/libpci

USES=		gmake tar:bzip2

MAKE_ENV=	WARNERROR=no

PLIST_FILES=	bin/flashrom \
		man/man8/flashrom.8.gz
PORTDOCS=	*

OPTIONS_DEFINE=		DMIDECODE DOCS FTDI
OPTIONS_DEFAULT=	DMIDECODE FTDI

DMIDECODE_DESC=		Use dmidecode to gather DMI information
FTDI_DESC=		Enable external FT2232SPI flasher support

DMIDECODE_RUN_DEPENDS=	dmidecode:sysutils/dmidecode

FTDI_LIB_DEPENDS=	libftdi1.so:devel/libftdi1
FTDI_USES=		pkgconfig

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/flashrom ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/flashrom.8 ${STAGEDIR}${MAN8PREFIX}/man/man8
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/Documentation && ${INSTALL_DATA} *.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
