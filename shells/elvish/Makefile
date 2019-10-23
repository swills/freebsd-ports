# $FreeBSD$

PORTNAME=	elvish
DISTVERSIONPREFIX=	v
DISTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	shells

MAINTAINER=	vendion@gmail.com
COMMENT=	Friendly Interactive Shell and Expressive Programming Language

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	go gmake
USE_GITHUB=	yes
GH_ACCOUNT=	elves

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

PLIST_FILES=	bin/elvish

# needed as the way that the upstream source is fetched it is fetch as not a Git
# repo, thus the way the packages Makefile gets the version string does not work
post-patch:
	${REINPLACE_CMD} -e 's/$$(VERSION)/${DISTVERSIONPREFIX}${DISTVERSION}/g' \
		${GO_WRKSRC}/Makefile

# needed to set the version information in the birnary
do-build:
	cd ${GO_WRKSRC} && ${GO_ENV} ${MAKE_CMD} get

.include <bsd.port.mk>
