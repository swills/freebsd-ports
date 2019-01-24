# Created by: ijliao
# $FreeBSD: head/graphics/p5-GraphViz-Data-Structure/Makefile 490515 2019-01-16 20:11:16Z sunpoet $

PORTNAME=	GraphViz-Data-Structure
PORTVERSION=	0.20
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Visualise data structures

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	dot:graphics/graphviz \
		p5-GraphViz>=0:graphics/p5-GraphViz

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
