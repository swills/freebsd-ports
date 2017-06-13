# Created by: nadav@cs.technion.ac.il
# $FreeBSD: head/hebrew/elmar-fonts/Makefile 434692 2017-02-24 01:52:10Z cpm $

PORTNAME=	elmar
PORTVERSION=	3.3
PORTREVISION=	5
CATEGORIES=	hebrew x11-fonts
MASTER_SITES=	ftp://ftp.elmar.co.il/Portable/fonts/
PKGNAMESUFFIX=	-fonts
DISTNAME=	H.fonts

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Collection of Hebrew fonts from El-Mar software, Ltd

USES=		fonts tar:Z
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
FONTNAME=	hebrew

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${TAR} -C ${STAGEDIR}${FONTSDIR} -xZpf \
		${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}

.include <bsd.port.mk>
