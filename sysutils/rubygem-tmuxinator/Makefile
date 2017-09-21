# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/sysutils/rubygem-tmuxinator/Makefile 450222 2017-09-20 16:32:37Z sunpoet $

PORTNAME=	tmuxinator
PORTVERSION=	0.10.0
CATEGORIES=	sysutils ruby
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Manage complex tmux sessions easily

LICENSE=	MIT

RUN_DEPENDS=	rubygem-erubis>=2.6:www/rubygem-erubis \
		rubygem-thor>=0.15.0:devel/rubygem-thor \
		rubygem-xdg>=2.2.3:devel/rubygem-xdg \
		tmux:sysutils/tmux

USES=		gem
USE_RUBY=	yes
NO_ARCH=	yes

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d
	${INSTALL_DATA} ${WRKSRC}/completion/tmuxinator.bash ${STAGEDIR}${PREFIX}/etc/bash_completion.d/_tmuxinator.bash
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${WRKSRC}/completion/tmuxinator.zsh ${STAGEDIR}${PREFIX}/share/zsh/site-functions/_tmuxinator

.include <bsd.port.mk>
