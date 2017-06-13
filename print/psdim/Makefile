# Created by: e-masson@kisoft-services.com
# $FreeBSD: head/print/psdim/Makefile 411798 2016-03-24 15:47:50Z tijl $

PORTNAME=	psdim
PORTVERSION=	1.4
PORTREVISION=	8
CATEGORIES=	print
MASTER_SITES=	http://www.mathstat.dal.ca/~selinger/psdim/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Calculates the optimal placement of the pages for n-up printing

LICENSE=	GPLv2

USES=		ghostscript

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}

PLIST_FILES=	bin/psdim man/man1/psdim.1.gz

.include <bsd.port.mk>
