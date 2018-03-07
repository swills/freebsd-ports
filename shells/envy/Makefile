# $FreeBSD: head/shells/envy/Makefile 463740 2018-03-06 19:10:08Z krion $

PORTNAME=	envy
DISTVERSIONPREFIX=v
DISTVERSION=	0.1.0
CATEGORIES=	shells

MAINTAINER=	krion@FreeBSD.org
COMMENT=	Shell helper that automatically sets and unsets environment variables

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	wojas

GO_PKGNAME=	github.com/wojas/${PORTNAME}

PLIST_FILES=	bin/envy

.include <bsd.port.mk>
