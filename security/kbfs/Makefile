# $FreeBSD: head/security/kbfs/Makefile 469593 2018-05-10 23:14:09Z sunpoet $

PORTNAME=	kbfs
PORTVERSION=	1.0.48
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
