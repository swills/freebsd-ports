# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/devel/p5-Input-Validator/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Input-Validator
PORTVERSION=	0.001005
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VTI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Input validator that just validates input

LICENSE=	ART20

BUILD_DEPENDS=	p5-Class-Load>=0:devel/p5-Class-Load \
		p5-String-CamelCase>=0:textproc/p5-String-CamelCase
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
