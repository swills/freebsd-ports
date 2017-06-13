# Created by: NAKATA Maho <maho@FreeBSD.org>
# $FreeBSD: head/devel/epm/Makefile 438622 2017-04-16 09:02:18Z amdmi3 $

PORTNAME=	epm
PORTVERSION=	4.3
CATEGORIES=	devel
MASTER_SITES=	http://www.msweet.org/files/project2/
EXTRACT_SUFX=	-source.tar.bz2

MAINTAINER=	office@FreeBSD.org
COMMENT=	Free UNIX software/file packaging program

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

MAKE_JOBS_UNSAFE=	yes
USES=		tar:bzip2
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/mkepmlist

.include <bsd.port.mk>
