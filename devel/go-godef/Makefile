# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/devel/go-godef/Makefile 488346 2018-12-25 21:32:52Z ultima $

PORTNAME=	godef
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.1
CATEGORIES=	devel
PKGNAMEPREFIX=	go-

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Print where symbols are defined in Go source code

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	rogpeppe
GH_TAGNAME=	b692db1de

GO_PKGNAME=	github.com/rogpeppe/godef

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
