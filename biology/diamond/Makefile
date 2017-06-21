# $FreeBSD: head/biology/diamond/Makefile 443706 2017-06-16 14:49:19Z jrm $

PORTNAME=	diamond
DISTVERSIONPREFIX=v
DISTVERSION=	0.9.8
CATEGORIES=	biology

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	BLAST-compatible local sequence aligner

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64 i386

USES=		cmake:outsource

CFLAGS+=	-DNDEBUG

USE_GITHUB=	yes
GH_ACCOUNT=	bbuchfink

PLIST_FILES=	bin/diamond

.if ! defined(PACKAGE_BUILDING)
CXXFLAGS+=	-march=native
.endif

.include <bsd.port.mk>
