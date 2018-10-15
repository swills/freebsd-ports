# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-POE-Component-DebugShell/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	POE-Component-DebugShell
PORTVERSION=	1.412
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interactive peeking into a running POE application

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-POE-API-Peek>=0:devel/p5-POE-API-Peek
TEST_DEPENDS=	p5-Test-Distribution>=0:devel/p5-Test-Distribution

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
