# $FreeBSD: head/print/gspdf/Makefile 458754 2018-01-11 16:24:53Z danfe $

PORTNAME=	gspdf
PORTVERSION=	0.5
PORTREVISION=	7
CATEGORIES=	print gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	GSPdf-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Postscript and Pdf Viewer for GNUstep

USES=		ghostscript gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/GSPdf.app/GSPdf

.include <bsd.port.mk>
