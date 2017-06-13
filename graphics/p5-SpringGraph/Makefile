# Created by: fernan@iib.unsam.edu.ar
# $FreeBSD: head/graphics/p5-SpringGraph/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	SpringGraph
PORTVERSION=	0.05
PORTREVISION=	8
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN/GraphViz/TEEJAY
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Directed graph alternative to GraphViz

BUILD_DEPENDS=	p5-GD>=1:graphics/p5-GD
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
