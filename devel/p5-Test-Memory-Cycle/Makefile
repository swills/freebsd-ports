# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Test-Memory-Cycle/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-Memory-Cycle
PORTVERSION=	1.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Check for memory leaks and circular memory references

BUILD_DEPENDS=	p5-Devel-Cycle>=0:devel/p5-Devel-Cycle \
		p5-PadWalker>=0:devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
