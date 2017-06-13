# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/devel/p5-Config-Merge/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Config-Merge
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Load a configuration directory tree in a number of languages

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Config-Any>=0:devel/p5-Config-Any
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
