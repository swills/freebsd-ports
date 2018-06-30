# $FreeBSD: head/security/kbfs/Makefile 473517 2018-06-28 21:20:02Z sunpoet $

PORTNAME=	kbfs
PORTVERSION=	2.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Keybase Filesystem (KBFS)

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
GO_TARGET=	-tags production ${GO_PKGNAME}/kbfsfuse ${GO_PKGNAME}/kbfsgit/git-remote-keybase ${GO_PKGNAME}/kbfstool
USES=		go

PLIST_FILES=	bin/git-remote-keybase bin/kbfsfuse bin/kbfstool

GH_ACCOUNT=	keybase
USE_GITHUB=	yes

.include <bsd.port.mk>
