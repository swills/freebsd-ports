# Created by: ijliao
# $FreeBSD: head/graphics/p5-Chart-Graph/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Chart-Graph
PORTVERSION=	3.2
PORTREVISION=	9
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension for a front-end to gnuplot, XRT, and Xmgrace

LICENSE=	GPLv2

RUN_DEPENDS=	gnuplot:math/gnuplot \
		xmgrace:math/grace \
		ppmtogif:graphics/netpbm

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e "s,%%LOCALBASE%%,${LOCALBASE}," ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
