# Created by: Alexander Zhuravlev <zaa@zaa.pp.ru>
# $FreeBSD: head/mail/p5-Mail-DeliveryStatus-BounceParser/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Mail-DeliveryStatus-BounceParser
PORTVERSION=	1.542
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to analyze bounce messages

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-MIME-Tools>=5.418:mail/p5-MIME-Tools \
		p5-Mail-Tools>=2.04:mail/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
