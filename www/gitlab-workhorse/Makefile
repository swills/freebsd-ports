# Created by: Torsten Zuehlsdorff <tz@FreeBSD.org>
# $FreeBSD: head/www/gitlab-workhorse/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	gitlab-workhorse
PORTVERSION=	3.3.1
DISTVERSIONPREFIX=	v
CATEGORIES=	www
MASTER_SITES=	https://gitlab.com/gitlab-org/${PORTNAME}/repository/archive.tar.gz?ref=${DISTVERSIONPREFIX}${PORTVERSION}&dummy=/

MAINTAINER=	idefix@fechner.net
COMMENT=	Smart reverse proxy for GitLab

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	go>=1.5.3:lang/go

MAKE_JOBS_UNSAFE=yes
USES=	gmake

PLIST_FILES=	bin/gitlab-workhorse \
		bin/gitlab-zip-cat \
		bin/gitlab-zip-metadata
PLIST_DIRS=	%%WWWDIR%%

post-extract:
	@${MV} ${WRKDIR}/${DISTNAME}-* ${WRKDIR}/${DISTNAME}

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/www/${PORTNAME}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gitlab-workhorse
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gitlab-zip-cat
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gitlab-zip-metadata

.include <bsd.port.mk>
