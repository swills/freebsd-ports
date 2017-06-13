# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-POE-Component-JobQueue/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	POE-Component-JobQueue
PORTVERSION=	0.5710
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0+$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE component to manage queues and worker pools

BUILD_DEPENDS=	p5-POE>=0:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
