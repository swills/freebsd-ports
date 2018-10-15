# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/net-im/p5-Net-Stomp/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Net-Stomp
PORTVERSION=	0.57
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Streaming Text Orientated Messaging Protocol Client

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Fatal>=0:devel/p5-Test-Fatal

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
