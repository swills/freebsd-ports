# $FreeBSD$

PORTNAME=	gitlab-pages
PORTVERSION=	0.6.0
CATEGORIES=	www
MASTER_SITES=	https://gitlab.com/gitlab-org/${PORTNAME}/repository/archive.tar.gz?ref=v${PORTVERSION}&dummy=/
DISTNAME=	${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Official GitLab Pages daemon

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	go:lang/go

USES=		tar:bz2
GITHASH=	15c938cafbd95064bbc4be34cd72091f9a61edaa
WRKSRC=		${WRKDIR}/gitlab-pages-v${PORTVERSION}-${GITHASH}

PLIST_FILES=	bin/gitlab-pages

USE_RC_SUBR=	gitlab_pages

USERS=		gitlab-pages
GROUPS=		gitlab-pages

post-patch:
	@${MV} ${WRKSRC}/vendor ${WRKSRC}/src
	@${MKDIR} ${WRKSRC}/src/gitlab.com/gitlab-org
	@${LN} -s ${WRKSRC} ${WRKSRC}/src/gitlab.com/gitlab-org/gitlab-pages

do-build:
	cd ${WRKSRC} && ${SETENV} GOCACHE=${WRKSRC}/go CGO_ENABLED=0 GO15VENDOREXPERIMENT=1 \
		GOPATH=${WRKSRC} \
		go build -o gitlab-pages \
		--ldflags="-X main.VERSION=${PORTVERSION} -X main.REVISION=${GITHASH}"

pre-install:
	${RM} -rf ${WRKSRC}/go

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gitlab-pages ${STAGEDIR}${PREFIX}/bin/gitlab-pages

.include <bsd.port.mk>
