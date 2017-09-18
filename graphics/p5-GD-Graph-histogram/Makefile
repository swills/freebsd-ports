# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: head/graphics/p5-GD-Graph-histogram/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	GD-Graph-histogram
PORTVERSION=	1.1
PORTREVISION=	5
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WHIZDOG
PKGNAMEPREFIX=	p5-
DISTNAME=	GDGraph-histogram-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Histogram plotting module for perl5

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-GD-Graph>=0:graphics/p5-GD-Graph
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
