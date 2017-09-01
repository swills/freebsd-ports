# Created by: Dmitry Sivachenko <dima@Chg.RU>
# $FreeBSD: head/www/p5-HTML-Tree/Makefile 449044 2017-08-31 15:32:18Z sunpoet $

PORTNAME=	HTML-Tree
PORTVERSION=	5.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Collection of modules to manipulate HTML syntax trees

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-HTML-Parser>=3.46:www/p5-HTML-Parser \
		p5-HTML-Tagset>=3.02:www/p5-HTML-Tagset \
		p5-libwww>=5.815:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
