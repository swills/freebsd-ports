# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Test-TAP-Model/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-TAP-Model
PORTVERSION=	0.10
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Accessible result collector for Test::Harness::Straps runs

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Method-Alias>=0:devel/p5-Method-Alias \
		p5-Test-Harness-Straps>=0.30:devel/p5-Test-Harness-Straps
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

post-patch:
	${RM} ${WRKSRC}/example.pl

.include <bsd.port.mk>
