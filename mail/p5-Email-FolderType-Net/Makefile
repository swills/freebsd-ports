# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/mail/p5-Email-FolderType-Net/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Email-FolderType-Net
PORTVERSION=	1.043
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Recognize folder types for network based message protocols

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-FolderType>=0.800:mail/p5-Email-FolderType \
		p5-URI>=1.35:net/p5-URI

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
