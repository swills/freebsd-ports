# $FreeBSD: head/devel/colormake/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	colormake
PORTVERSION=	0.9
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://bre.klaki.net/programs/colormake/

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Wrapper to color gmake output

RUN_DEPENDS=	gmake:devel/gmake \
		bash:shells/bash

NO_BUILD=	yes
USES=		perl5 shebangfix
USE_PERL5=	run
SHEBANG_FILES=	colormake.pl
PLIST_FILES=	bin/colormake bin/colormake.pl bin/colormake-short bin/clmake \
		bin/clmake-short

post-patch:
	cd ${WRKSRC} && \
	${REINPLACE_CMD} -e "s,make ,gmake ,g;s,/bin/bash,${LOCALBASE}/bin/bash,g" \
		colormake colormake-short clmake clmake-short

do-install:
	cd ${WRKSRC} && \
	${INSTALL_SCRIPT} colormake.pl colormake colormake-short clmake \
		clmake-short ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
