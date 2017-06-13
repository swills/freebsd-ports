# Created by: ache@FreeBSD.org
# $FreeBSD: head/databases/p5-MLDBM/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	MLDBM
PORTVERSION=	2.05
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store multi-level hash structure in single level tied hash

BUILD_DEPENDS=	p5-FreezeThaw>=0:devel/p5-FreezeThaw
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
