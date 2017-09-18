# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/devel/p5-Config-Versioned/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Config-Versioned
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Simple, versioned access to configuration data

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-DateTime>=0:devel/p5-DateTime \
		p5-Config-Std>=0:devel/p5-Config-Std \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Git-PurePerl>=0:devel/p5-Git-PurePerl

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
