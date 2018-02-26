# $FreeBSD: head/devel/gitaly/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	gitaly
DISTVERSIONPREFIX=	v
DISTVERSION=	0.82.0
CATEGORIES=	devel
MASTER_SITES=	https://gitlab.com/gitlab-org/${PORTNAME}/repository/archive.tar.gz?ref=${DISTVERSIONPREFIX}${PORTVERSION}&dummy=/

MAINTAINER=	idefix@fechner.net
COMMENT=	Smart reverse proxy for GitLab

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

# definedependencies that are required for build and run under MY_DEPENDS
MY_DEPENDS=	git>=2.14.3:devel/git \
		rubygem-github-linguist47>=4.7.0:textproc/rubygem-github-linguist47 \
		rubygem-bundler>0:sysutils/rubygem-bundler \
		rubygem-gitlab-markup>=1.6.2:textproc/rubygem-gitlab-markup \
		rubygem-gitaly-proto083>=0.83.0:net/rubygem-gitaly-proto083 \
		rubygem-activesupport50>=5.0.2:devel/rubygem-activesupport50 \
		rubygem-rdoc>=4.2:devel/rubygem-rdoc \
		rubygem-gollum-lib-gitlab>=4.2.0:www/rubygem-gollum-lib-gitlab \
		rubygem-gollum-rugged_adapter>=0.4.4:www/rubygem-gollum-rugged_adapter \
		rubygem-grpc>=1.8.0:net/rubygem-grpc \
		rubygem-google-protobuf351>=3.5.1:devel/rubygem-google-protobuf351 \
		rubygem-toml-rb03>=0.3.15:www/rubygem-toml-rb03

BUILD_DEPENDS=	go>=1.8:lang/go \
		gem:devel/ruby-gems \
		rubygem-bundler>0:sysutils/rubygem-bundler \
		${MY_DEPENDS}

RUN_DEPENDS=	${MY_DEPENDS} \
		gitlab-shell>=6.0.3:devel/gitlab-shell

USES=	gmake
USE_RUBY=	yes

post-extract:
	${MV} ${WRKDIR}/${DISTNAME}-* ${WRKDIR}/${DISTNAME}

post-patch:
	${MV} ${WRKDIR}/${DISTNAME}/config.toml.example ${WRKDIR}/${DISTNAME}/config.toml.sample

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
	$(RM) -f ${WRKSRC}/ruby/Gemfile.orig
	(cd ${WRKSRC}/_build/bin/ && ${COPYTREE_SHARE} .  ${STAGEDIR}${DATADIR}/bin && \
	cd ${WRKSRC} && ${COPYTREE_SHARE} config.toml.sample  ${STAGEDIR}${DATADIR}) && \
	cd ${WRKSRC}/ruby && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/ruby

post-install:
	${STRIP_CMD} ${STAGEDIR}${DATADIR}/bin/gitaly
	${STRIP_CMD} ${STAGEDIR}${DATADIR}/bin/gitaly-ssh

.include <bsd.port.mk>
