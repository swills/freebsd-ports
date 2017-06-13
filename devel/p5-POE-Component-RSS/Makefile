# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-POE-Component-RSS/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	POE-Component-RSS
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5 textproc
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module for event based RSS parsing

BUILD_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-XML-RSS>=0:textproc/p5-XML-RSS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
