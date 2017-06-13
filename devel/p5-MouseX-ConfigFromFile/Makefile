# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: head/devel/p5-MouseX-ConfigFromFile/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	MouseX-ConfigFromFile
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MASAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Abstract Mouse role for setting attributes from a configfile

BUILD_DEPENDS=	p5-Filter>=0:devel/p5-Filter \
		p5-Mouse>=0.19:devel/p5-Mouse \
		p5-MouseX-Types-Path-Class>=0.05:devel/p5-MouseX-Types-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
