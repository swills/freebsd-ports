# Created by: Aaron Dalton <aaron@daltons.ca>
# $FreeBSD: head/devel/p5-AI-Pathfinding-AStar/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	AI-Pathfinding-AStar
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl implementation of the A* pathfinding algorithm

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Heap>=0:devel/p5-Heap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
