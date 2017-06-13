# $FreeBSD: head/devel/ndesk-options/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	ndesk-options
PORTVERSION=	0.2.1
CATEGORIES=	devel
MASTER_SITES=	http://www.ndesk.org/archive/${PORTNAME}/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Callback-based program option parser for C\#

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_MCS=${LOCALBASE}/bin/mcs
USES=		gmake mono pathfix pkgconfig
PATHFIX_MAKEFILEIN=	Makefile.in configure

post-extract:
	@${MV} ${WRKSRC}/lib ${WRKSRC}/libdata

.include <bsd.port.mk>
