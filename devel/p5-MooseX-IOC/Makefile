# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-MooseX-IOC/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	MooseX-IOC
PORTVERSION=	0.03
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Moose attributes with IOC integration

BUILD_DEPENDS=	p5-IOC>=0:devel/p5-IOC \
		p5-Moose>=0:devel/p5-Moose
RUN_DEPENDS=	p5-IOC>=0:devel/p5-IOC \
		p5-Moose>=0:devel/p5-Moose
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
