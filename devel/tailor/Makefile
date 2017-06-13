# Created by: Rui Lopes <rgl ruilopes com>
# $FreeBSD: head/devel/tailor/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	tailor
PORTVERSION=	0.9.35
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	http://BSDforge.com/projects/source/devel/tailor/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Migrates changesets between version control systems

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${LOCALBASE}/bin/rsync:net/rsync

USES=		python
USE_PYTHON=	distutils
NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
