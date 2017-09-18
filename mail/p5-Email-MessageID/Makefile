# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/mail/p5-Email-MessageID/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Email-MessageID
PORTVERSION=	1.406
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate world unique message-ids

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Email-Address>=1.800:mail/p5-Email-Address
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
