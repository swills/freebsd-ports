# Created by: Joe Horn <joehorn@gmail.com>
# $FreeBSD$

PORTNAME=	tuning-primer
PORTVERSION=	1.6.r1
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://launchpad.net/mysql-${PORTNAME}/trunk/1.6-r1/+download/
DISTNAME=	${PORTNAME}.sh
EXTRACT_SUFX=	# empty
DIST_SUBDIR=	${PORTNAME}/${DISTVERSION}
EXTRACT_ONLY=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MySQL performance tuning primer script

LICENSE=	GPLv2

NO_BUILD=	yes
NO_ARCH=	yes
USES=		mysql

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${DISTDIR}/${DIST_SUBDIR}/${PORTNAME}.sh \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

post-install:
	@${PATCH} ${STAGEDIR}${PREFIX}/bin/${PORTNAME} files/mariadb_support.patch

.include <bsd.port.mk>
