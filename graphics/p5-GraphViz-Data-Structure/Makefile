# Created by: ijliao
# $FreeBSD: head/graphics/p5-GraphViz-Data-Structure/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	GraphViz-Data-Structure
PORTVERSION=	0.19
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Visualise data structures

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	dot:graphics/graphviz \
		p5-GraphViz>=0:graphics/p5-GraphViz

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
