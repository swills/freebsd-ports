# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/devel/p5-Tree-DAG_Node/Makefile 442358 2017-06-01 23:52:29Z sunpoet $

PORTNAME=	Tree-DAG_Node
PORTVERSION=	1.29
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Super class for representing nodes in a tree

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-File-Slurp-Tiny>=0.003:devel/p5-File-Slurp-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5 tar:tgz
USE_PERL5=	configure

.include <bsd.port.mk>
