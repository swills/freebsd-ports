# $FreeBSD: head/lang/gravity/Makefile 491542 2019-01-29 04:58:45Z yuri $

PORTNAME=	gravity
DISTVERSION=	0.6.3
CATEGORIES=	lang
PKGNAMESUFFIX=	-lang

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Embeddable programming language

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	marcobambini

LDFLAGS+=	-lm

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
