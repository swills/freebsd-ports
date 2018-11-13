# Created by: Dryice Liu <dryice@dryice.name>
# $FreeBSD: head/audio/emms/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	emms
DISTVERSION=	5.0
PORTREVISION=	2
CATEGORIES=	audio elisp
MASTER_SITES=	GNU
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Emacs Multi-Media System

LICENSE=	GPLv3

# do not depend on base texinfo on 10
BUILD_DEPENDS=	texi2dvi:print/texinfo

USES=		emacs gmake

INFO=		emms
NO_ARCH=	yes

.include <bsd.port.mk>
