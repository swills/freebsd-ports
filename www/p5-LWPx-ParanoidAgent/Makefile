# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: head/www/p5-LWPx-ParanoidAgent/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	LWPx-ParanoidAgent
PORTVERSION=	1.12
CATEGORIES=	www security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Subclass of LWP::UserAgent that protects you from harm

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Crypt-SSLeay>=0.58:security/p5-Crypt-SSLeay \
		p5-Net-DNS>=0:dns/p5-Net-DNS \
		p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
