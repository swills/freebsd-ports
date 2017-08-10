# Created by: Frederic Culot <culot@FreeBSD.org>
# $FreeBSD: head/www/p5-HTTP-Cookies/Makefile 447371 2017-08-04 20:08:51Z sunpoet $

PORTNAME=	HTTP-Cookies
PORTVERSION=	6.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTTP Cookie jars

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTTP-Date>=6:www/p5-HTTP-Date \
		p5-HTTP-Message>=6:www/p5-HTTP-Message
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-URI>=0:net/p5-URI

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
