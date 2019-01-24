# $FreeBSD: head/sysutils/rubygem-puppetserver-ca/Makefile 491066 2019-01-24 00:08:20Z romain $

PORTNAME=	puppetserver-ca
PORTVERSION=	1.3.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	Ruby CLI tool to interact with the Puppet Server Certificate Authority

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	facter:sysutils/facter

USES=		gem
USE_RUBY=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' \
		${WRKSRC}/lib/puppetserver/ca/config/puppet.rb

.include <bsd.port.mk>
