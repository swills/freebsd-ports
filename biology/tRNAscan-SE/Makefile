# Created by: chuynh@biolateral.com.au
# $FreeBSD: head/biology/tRNAscan-SE/Makefile 473544 2018-06-29 12:43:19Z antoine $

PORTNAME=	tRNAscan-SE
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	biology
MASTER_SITES=	http://lowelab.ucsc.edu/software/
DISTFILES=	${DISTNAME:tl}${EXTRACT_SUFX}

MAINTAINER=	mzaki@niid.go.jp
COMMENT=	Searching for tRNA genes in genomic sequence

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN=		missing plist

RUN_DEPENDS=	cmsearch:biology/infernal

WRKSRC=		${WRKDIR}/${DISTNAME:S,.0$,,}

GNU_CONFIGURE=	yes

USES=		perl5 autoreconf

.include <bsd.port.mk>
