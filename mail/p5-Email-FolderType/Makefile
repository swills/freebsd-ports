# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/mail/p5-Email-FolderType/Makefile 441111 2017-05-17 18:04:34Z sunpoet $

PORTNAME=	Email-FolderType
PORTVERSION=	0.8.14
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Determine the type of a mail folder

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Module-Pluggable>0:devel/p5-Module-Pluggable
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Capture-Tiny>0:devel/p5-Capture-Tiny

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
